class Singleton {
public:
    static Singleton& getInstance() {
        static Singleton instance; // Guaranteed thread-safe in C++11 and later
        return instance;
    }

    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() = default;
};
