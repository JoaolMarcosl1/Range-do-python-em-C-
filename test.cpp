template<int min, int max, int step = 1,
    int absrange = (max - min) < 0 ? -(max - min) : (max - min),
    int absstep = step < 0 ? -step : step,
    int size = absrange / absstep + ((absrange % step) != 0)>
consteval std::array<int, size> range() {
    std::array<int, size> result = { 0 };
    int x = min;
    for (int i = 0; i < size; i++) {
        result[i] = x;
        x += step;
    }
    return result;
}
