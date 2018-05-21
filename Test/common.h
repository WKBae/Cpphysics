#pragma once
#include "../Cpphysics/Vector.h"

namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {
			template<>
			static std::wstring ToString<Vector<int>>(const Vector<int>& vec) {
				std::wostringstream w;
				w << L"Vector(" << vec.x << L", " << vec.y << L")";
				return w.str();
			}
			template<>
			static std::wstring ToString<Vector<double>>(const Vector<double>& vec) {
				std::wostringstream w;
				w << L"Vector(" << vec.x << L", " << vec.y << L")";
				return w.str();
			}
		}
	}
}
