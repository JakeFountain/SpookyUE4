/*  This file is part of UnrealFusion, a sensor fusion plugin for VR in the Unreal Engine
Copyright (C) 2017 Jake Fountain
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "FusionTypes.h"

namespace fusion {
	
	/*	Savemanager is responsible for loading and saving data from/to files. In particular, calibration results
	*/
	class SaveManager {

	public:
		//Configuration
		bool setWorkingDirectory(const std::string& dir);

		//Loading and saving calibration results
		bool loadCalibration(CalibrationResult* currentResult);
		bool saveCalibration(const CalibrationResult& result);

	};

}
