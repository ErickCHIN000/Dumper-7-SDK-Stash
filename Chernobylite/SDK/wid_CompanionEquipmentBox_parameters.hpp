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
// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.GetSelected
struct UWid_CompanionEquipmentBox_C_GetSelected_Params
{
public:
	class UWid_CompanionEquipment_ItemBox_C*     ItemBox;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_Select_Default;                             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.Select Next
struct UWid_CompanionEquipmentBox_C_Select_Next_Params
{
public:
	int32                                        FirstIndex;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2143[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     NewToSelect;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2155[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2164[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_Select_Default;                             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_216A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_Select_Default_1;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_Select_Default_2;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.Select
struct UWid_CompanionEquipmentBox_C_Select_Params
{
public:
	enum class ECompanionEquipmentSlotType       Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECompanionEquipmentSlotType       Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21C4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionEquipment_ItemBox_C*     K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.PreConstruct
struct UWid_CompanionEquipmentBox_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.Init
struct UWid_CompanionEquipmentBox_C_Init_Params
{
public:
	class FName                                  CompanionID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x62 (0x62 - 0x0)
// Function wid_CompanionEquipmentBox.wid_CompanionEquipmentBox_C.ExecuteUbergraph_wid_CompanionEquipmentBox
struct UWid_CompanionEquipmentBox_C_ExecuteUbergraph_wid_CompanionEquipmentBox_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_CompanionID;                    // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2242[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActorInfo                            CallFunc_K2_GetActorInfo_Info;                     // 0x18(0x48)(None)
	bool                                         CallFunc_K2_GetActorInfo_ReturnValue;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


