#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_OverlayState
struct IRALS_Character_BPI_C_BPI_Set_OverlayState_Params
{
public:
	enum class ERALS_OverlayState                NewOverlayState;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_ViewMode
struct IRALS_Character_BPI_C_BPI_Set_ViewMode_Params
{
public:
	enum class ERALS_ViewMode                    NewViewMode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_Gait
struct IRALS_Character_BPI_C_BPI_Set_Gait_Params
{
public:
	enum class ERALS_Gait                        NewGait;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_RotationMode
struct IRALS_Character_BPI_C_BPI_Set_RotationMode_Params
{
public:
	enum class ERALS_RotationMode                NewRotationMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_MovementAction
struct IRALS_Character_BPI_C_BPI_Set_MovementAction_Params
{
public:
	enum class ERALS_MovementAction              NewMovementAction;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Set_MovementState
struct IRALS_Character_BPI_C_BPI_Set_MovementState_Params
{
public:
	enum class ERALSMovementState                NewMovementState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Get_EssentialValues
struct IRALS_Character_BPI_C_BPI_Get_EssentialValues_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Acceleration;                                      // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MovementInput;                                     // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasMovementInput;                                  // 0x49(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D45[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Speed;                                             // 0x50(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MovementInputAmount;                               // 0x58(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              AimingRotation;                                    // 0x60(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       AimYawRate;                                        // 0x78(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function RALS_Character_BPI.RALS_Character_BPI_C.BPI_Get_CurrentStates
struct IRALS_Character_BPI_C_BPI_Get_CurrentStates_Params
{
public:
	enum class EMovementMode                     PawnMovementMode;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALSMovementState                MovementState;                                     // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALSMovementState                PrevMovementState;                                 // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALS_MovementAction              MovementAction;                                    // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALS_RotationMode                RotationMode;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALS_Gait                        ActualGait;                                        // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALS_Stance                      ActualStance;                                      // 0x6(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALS_ViewMode                    ViewMode;                                          // 0x7(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERALS_OverlayState                OverlayState;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


