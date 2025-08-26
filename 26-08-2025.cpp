
double maxDiagonal = 0.0;
        int maxArea = 0;

        for (auto& dim : dimensions) {
            int len = dim[0], bre = dim[1];
            double currentDiagonal = sqrt(len * len + bre * bre);
            int currentArea = len * bre;

            if (currentDiagonal > maxDiagonal) {
                maxDiagonal = currentDiagonal;
                maxArea = currentArea;
            } else if (abs(currentDiagonal - maxDiagonal) < 1e-9) {
                maxArea = max(maxArea, currentArea);
            }
        }

        return maxArea;
