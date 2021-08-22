#ifndef STREAM_HPP
#define STREAM_HPP

void set_force_vgmstream();
void set_sample_rate(int64_t sampleRate);
void set_enable_loop(int64_t isLoopingEnabled);
void set_loop_start_samples(int64_t samples);
void set_loop_end_samples(int64_t samples);
void set_loop_start_microseconds(int64_t microseconds);
void set_loop_end_microseconds(int64_t microseconds);

#endif