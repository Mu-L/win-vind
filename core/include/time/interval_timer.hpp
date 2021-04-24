#ifndef _INTERVAL_TIMER_HPP
#define _INTERVAL_TIMER_HPP

#include <memory>

namespace vind
{
    // IntervalTimer provides a function that returns true after a certain amount of time.
    class IntervalTimer {
    private:
        struct Impl ;
        std::unique_ptr<Impl> pimpl ;

    public:
        explicit IntervalTimer(const int delta_us=30) ;

        virtual ~IntervalTimer() noexcept ;

        IntervalTimer(const IntervalTimer&) ;
        IntervalTimer& operator=(const IntervalTimer&) ;

        IntervalTimer(IntervalTimer&&) ;
        IntervalTimer& operator=(IntervalTimer&&) ;

        void set_delta(const int delta_us) noexcept ;
        void reset() noexcept ;
        bool is_passed() const ;
    } ;
}

#endif