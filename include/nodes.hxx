#include "types.hxx"
#include "package.hxx"
#include <optional>
class RecivePreferences{

};

class PackegeSender{
public:
    PackegeSender(PackegeSender&&)=default; //konstruktor 

    RecivePreferences receiver_preferences_; //pobranie preferencji z klasy RecivePreferences

    void send_package(); //wymuszenie metody na klasach Ramp Worker

    std::optional<Package>& get_sending_buffer() {
        return buffer_;
    };


protected:
    void push_package(Package&& p){
        buffer_.emplace(std::move(p));
    };

    std::optional<Package> buffer_ = std::nullopt;
};




