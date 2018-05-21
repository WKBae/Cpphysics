#pragma once
#include "../Cpphysics/Vector.h"

namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {
			template<>
			static std::wstring ToString<Vector>(const Vector& vec) {
				std::wostringstream w;
				w << L"Vector(" << vec.x << L", " << vec.y << L")";
				return w.str();
			}
		}
	}
}
