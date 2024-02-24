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

// 0x38 (0x38 - 0x0)
// Function BP_Fireplace_Chimney_Ext.BP_Fireplace_Chimney_Ext_C.GetParentFireplace
struct ABP_Fireplace_Chimney_Ext_C_GetParentFireplace_Params
{
public:
	class ABP_DeployableBase_C*                  Parent;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADeployable*                           CallFunc_GetAttachedDeployableParent_ReturnValue;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DeployableBase_C*                  K2Node_DynamicCast_AsBP_Deployable_Base;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_170B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Fireplace_Chimney_Ext_C*           K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1713[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DeployableBase_C*                  CallFunc_GetParentFireplace_Parent;                // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_Fireplace_Chimney_Ext.BP_Fireplace_Chimney_Ext_C.GetChildCap
struct ABP_Fireplace_Chimney_Ext_C_GetChildCap_Params
{
public:
	class ABP_DeployableBase_C*                  ChildCap;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1775[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ADeployable*>                   CallFunc_GetAttachedDeployableChildren_ReturnValue; // 0x18(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1780[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ADeployable*                           CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_178D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Fireplace_Chimney_Cap_Half_C*      K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1793[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Fireplace_Chimney_Cap_C*           K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap;     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_179B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Fireplace_Chimney_Ext_C*           K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext;     // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_DeployableBase_C*                  CallFunc_GetChildCap_ChildCap;                     // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


