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

// 0x10 (0x10 - 0x0)
// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.GetFacingTarget
struct IBPI_StructureAIInterfaces_C_GetFacingTarget_Params
{
public:
	class UObject*                               QueryingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                FacingTarget;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.GetRangedAttackLocation
struct IBPI_StructureAIInterfaces_C_GetRangedAttackLocation_Params
{
public:
	class UObject*                               QueryingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class Enum_AttackLocationType           AttackLocationType;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.CompleteCompletableStructure
struct IBPI_StructureAIInterfaces_C_CompleteCompletableStructure_Params
{
public:
	class ANWXAICharacter*                       AICharacter;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Complete;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BPI_StructureAIInterfaces.BPI_StructureAIInterfaces_C.GetReachableNavTransform
struct IBPI_StructureAIInterfaces_C_GetReachableNavTransform_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_263D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReachableNavTransform;                             // 0x10(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Structure;                                         // 0x70(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


