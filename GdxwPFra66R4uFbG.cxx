// version-5cf2272675e145f5

namespace BodyMovers {
	namespace LinearVelocity {
		inline constexpr uintptr_t Enabled = 0xB9;
		inline constexpr uintptr_t ForceLimitMode = 0x1E4;
		inline constexpr uintptr_t ForceLimitsEnabled = 0x249
		inline constexpr uintptr_t RelativeTo = 0x1AC;
		inline constexpr uintptr_t VelocityConstraintMode = 0x178;

		inline constexpr uintptr_t LineConstraintModePtr = 0x1C8;
		inline constexpr uintptr_t PlaneConstraintModePtr = 0x238;
		inline constexpr uintptr_t VelocityConstraintModePtr = 0x280;
		
		namespace LineConstraintMode {
			inline constexpr uintptr_t MaxForce = 0xC0;
			inline constexpr uintptr_t LineDirection = 0xA8;
			inline constexpr uintptr_t LineVelocity = 0xC8;
		}

		namespace PlaneConstraintMode {
			inline constexpr uintptr_t MaxForce = 0x100;
			inline constexpr uintptr_t PlaneVelocity = 0x108;
			inline constexpr uintptr_t PrimaryTangentAxis = 0xE8;
			inline constexpr uintptr_t SecondaryTangentAxis = 0xF4;
		}
		
		namespace VelocityConstraintMode {
			inline constexpr uintptr_t MaxForce = 0x14C;
			inline constexpr uintptr_t VectorVelocity = 0x158;
		}
	}
}

namespace MouseService {
	inline constexpr uintptr_t MouseBehavior = 0x234;
}

namespace UserInputService {
	inline constexpr uintptr_t MouseInput = 0x35B;
	inline constexpr uintptr_t UserInputType = 0x340;
}

namespace TextChatService {
	namespace ChatInputBarConfiguration {
		inline constexpr uintptr_t IsFocused = 0x13E;
	}
}

namespace Selection {
	inline constexpr uintptr_t RenderFPS = 0x1F0;
}