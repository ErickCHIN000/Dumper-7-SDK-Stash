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

// 0x9C (0x9C - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.ApplyRTPCs
struct UBP_LoadAndPlay_Audio_C_ApplyRTPCs_Params
{
public:
	class UAkComponent*                          AkComponent;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class UAkRtpc*, double>                 RTPCs;                                             // 0x8(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UAkRtpc*>                       CallFunc_Map_Keys_Keys;                            // 0x58(0x10)(ReferenceParm)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkRtpc*                               CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Map_Find_Value;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetRTPCValue_Value_ImplicitCast;          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC4 (0xC4 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load Switches And Event, Apply RTPC, Then Play Event
struct UBP_LoadAndPlay_Audio_C_Load_Switches_And_Event__Apply_RTPC__Then_Play_Event_Params
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          Event;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UAkSwitchValue>> Switches;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Location;                                          // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                Optional_Switches;                                 // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class UAkRtpc*, double>                 RTPCs;                                             // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         StopWhenOwnerDestroyed;                            // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2850[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xB4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load Switches and Event, then Play Event
struct UBP_LoadAndPlay_Audio_C_Load_Switches_and_Event__then_Play_Event_Params
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          Event;                                             // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<TSoftObjectPtr<class UAkSwitchValue>> Switches;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Location;                                          // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                Optional_Switches;                                 // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x60(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load, Switch and Play Event
struct UBP_LoadAndPlay_Audio_C_Load__Switch_and_Play_Event_Params
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          Soft_Ak_Event;                                     // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                Switches;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Location;                                          // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x50(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.Load and Play Event
struct UBP_LoadAndPlay_Audio_C_Load_and_Play_Event_Params
{
public:
	TSoftObjectPtr<class UAkAudioEvent>          Soft_Ak_Event;                                     // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.On Audio Event Loaded
struct UBP_LoadAndPlay_Audio_C_On_Audio_Event_Loaded_Params
{
public:
	class UAkAudioEvent*                         Audio_Event;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.On Audio Event and Switches Loaded
struct UBP_LoadAndPlay_Audio_C_On_Audio_Event_and_Switches_Loaded_Params
{
public:
	class UAkAudioEvent*                         Audio_Event;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                Switches;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.On Audio Event, Switches And RTPCs Loaded
struct UBP_LoadAndPlay_Audio_C_On_Audio_Event__Switches_And_RTPCs_Loaded_Params
{
public:
	class UAkAudioEvent*                         Audio_Event;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                Switches;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x69 (0x69 - 0x0)
// Function BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C.ExecuteUbergraph_BP_LoadAndPlay_Audio
struct UBP_LoadAndPlay_Audio_C_ExecuteUbergraph_BP_LoadAndPlay_Audio_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScopedAkComponent*                    CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue; // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         K2Node_CustomEvent_Audio_Event;                    // 0x10(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                K2Node_CustomEvent_Switches;                       // 0x18(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_PostAkEventScoped_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         K2Node_CustomEvent_Audio_Event_1;                  // 0x30(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                K2Node_CustomEvent_Switches_1;                     // 0x38(0x10)(ConstParm, ReferenceParm)
	class UScopedAkComponent*                    CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PostAkEventScoped_ReturnValue_1;          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         K2Node_CustomEvent_Audio_Event_2;                  // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_2; // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PostAkEventScoped_ReturnValue_2;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


