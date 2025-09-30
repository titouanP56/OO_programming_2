
class Point {
    private:
        int x;
        int y;
        int z;

    public:
        Point::Point(int x, int y, int z) {
            this->x = x;
            this->y = y;
            this->z = z;
        }

        Point::Point (const Point & p){
	        this->x = p.x;
	        this->y = p.y;
            this->z = p.z;
        }

        int Point::getX() const {
            return x;
        }
        int Point::getY() const {
            return y;
        }
        int Point::getZ() const {
            return z;
        }

        void Point::setX(int new_x) {
            x = new_x;
        }
        void Point::setY(int new_y) {
            y = new_y;
        }
        void Point::setZ(int new_z) {
            z = new_z;
        }


};
