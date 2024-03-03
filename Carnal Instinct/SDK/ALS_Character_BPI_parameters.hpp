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
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_OverlayState
struct IALS_Character_BPI_C_BPI_Set_OverlayState_Params
{
public:
	enum class EALS_OverlayState                 NewOverlayState;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_ViewMode
struct IALS_Character_BPI_C_BPI_Set_ViewMode_Params
{
public:
	enum class EALS_ViewMode                     NewViewMode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_Gait
struct IALS_Character_BPI_C_BPI_Set_Gait_Params
{
public:
	enum class EALS_Gait                         NewGait;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_RotationMode
struct IALS_Character_BPI_C_BPI_Set_RotationMode_Params
{
public:
	enum class EALS_RotationMode                 NewRotationMode;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementAction
struct IALS_Character_BPI_C_BPI_Set_MovementAction_Params
{
public:
	enum class EALS_MovementAction               NewMovementAction;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Set_MovementState
struct IALS_Character_BPI_C_BPI_Set_MovementState_Params
{
public:
	enum class EALS_MovementState                NewMovementState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_EssentialValues
struct IALS_Character_BPI_C_BPI_Get_EssentialValues_Params
{
public:
	struct FVector                               Velocity;                                          // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Acceleration;                                      // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               MovementInput;                                     // 0x18(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x24(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         HasMovementInput;                                  // 0x25(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1801[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovementInputAmount;                               // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              AimingRotation;                                    // 0x30(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        AimYawRate;                                        // 0x3C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function ALS_Character_BPI.ALS_Character_BPI_C.BPI_Get_CurrentStates
struct IALS_Character_BPI_C_BPI_Get_CurrentStates_Params
{
public:
	enum class EMovementMode                     PawnMovementMode;                                  // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_MovementState                MovementState;                                     // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_MovementState                PrevMovementState;                                 // 0x2(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_MovementAction               MovementAction;                                    // 0x3(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_RotationMode                 RotationMode;                                      // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_Gait                         ActualGait;                                        // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_Stance                       ActualStance;                                      // 0x6(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_ViewMode                     ViewMode;                                          // 0x7(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EALS_OverlayState                 OverlayState;                                      // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


