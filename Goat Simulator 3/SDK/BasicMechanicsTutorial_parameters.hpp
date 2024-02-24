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

// 0x20 (0x20 - 0x0)
// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GetStepCompletionArray
struct ABasicMechanicsTutorial_C_GetStepCompletionArray_Params
{
public:
	TArray<bool>                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<bool>                                 K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
};

// 0x21 (0x21 - 0x0)
// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatHeadbutted
struct ABasicMechanicsTutorial_C_GoatHeadbutted_Params
{
public:
	class AGGGoat*                               GoatHeadbutting;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHitSomething;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HeadbuttedActors;                                  // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Is_charge_headbutt;                                // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatLickedActor
struct ABasicMechanicsTutorial_C_GoatLickedActor_Params
{
public:
	class AGGGoat*                               GoatLicking;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LickedActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatLickMissed
struct ABasicMechanicsTutorial_C_GoatLickMissed_Params
{
public:
	class AGGGoat*                               GoatLicking;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.GoatJumped
struct ABasicMechanicsTutorial_C_GoatJumped_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.OnTutorialActivated
struct ABasicMechanicsTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA8 (0xA8 - 0x0)
// Function BasicMechanicsTutorial.BasicMechanicsTutorial_C.ExecuteUbergraph_BasicMechanicsTutorial
struct ABasicMechanicsTutorial_C_ExecuteUbergraph_BasicMechanicsTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_381[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_GoatHeadbutting;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bHitSomething;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_385[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_CustomEvent_HeadbuttedActors;               // 0x18(0x10)(ConstParm, ReferenceParm)
	bool                                         K2Node_CustomEvent_Is_charge_headbutt;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_388[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_GoatLicking_1;                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_LickedActor;                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_CustomEvent_GoatLicking;                    // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x58(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	class AGGCharacter*                          K2Node_CustomEvent_Character;                      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_397[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


