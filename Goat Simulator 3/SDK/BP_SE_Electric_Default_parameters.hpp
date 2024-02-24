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

// 0x9 (0x9 - 0x0)
// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.ElectricBeam_BP
struct ABP_SE_Electric_Default_C_ElectricBeam_BP_Params
{
public:
	class AActor*                                ShockedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bNewChain;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.BPClientInitializeStatus
struct ABP_SE_Electric_Default_C_BPClientInitializeStatus_Params
{
public:
	class UGGStatusEffectManager*                Manager;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.SelfElectricShock_BP
struct ABP_SE_Electric_Default_C_SelfElectricShock_BP_Params
{
public:
	class AActor*                                ShockedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.SelfInitialShock_BP
struct ABP_SE_Electric_Default_C_SelfInitialShock_BP_Params
{
public:
	class AActor*                                ShockedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.ElectrocutionChanged_BP
struct ABP_SE_Electric_Default_C_ElectrocutionChanged_BP_Params
{
public:
	bool                                         bIsElectrocuting;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bElectrocutingGoat;                                // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.BPInitializeStatus
struct ABP_SE_Electric_Default_C_BPInitializeStatus_Params
{
public:
	class UGGStatusEffectManager*                Manager;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EApplicationMethod                ApplicationMethod;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_357[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SpreadFrom;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMovedBetweenActors;                               // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7A (0x7A - 0x0)
// Function BP_SE_Electric_Default.BP_SE_Electric_Default_C.ExecuteUbergraph_BP_SE_Electric_Default
struct ABP_SE_Electric_Default_C_ExecuteUbergraph_BP_SE_Electric_Default_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_ShockedActor_2;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bNewChain;                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_382[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x14(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_386[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGStatusEffectManager*                K2Node_Event_Manager_1;                            // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_ShockedActor_1;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_ShockedActor;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetAffectedActor_ReturnValue;             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsElectrocuting;                     // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bElectrocutingGoat;                   // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_390[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGStatusEffectManager*                K2Node_Event_Manager;                              // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EApplicationMethod                K2Node_Event_ApplicationMethod;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_396[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_SpreadFrom;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bMovedBetweenActors;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


