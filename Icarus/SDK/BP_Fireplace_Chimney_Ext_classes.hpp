#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x780 - 0x774)
// BlueprintGeneratedClass BP_Fireplace_Chimney_Ext.BP_Fireplace_Chimney_Ext_C
class ABP_Fireplace_Chimney_Ext_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_17DC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  SM_DEP_Chimney_Extension_SHA;                      // 0x778(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fireplace_Chimney_Ext_C* GetDefaultObj();

	void GetParentFireplace(class ABP_DeployableBase_C** Parent, class ADeployable* CallFunc_GetAttachedDeployableParent_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess_1, class ABP_DeployableBase_C* CallFunc_GetParentFireplace_Parent);
	void GetChildCap(class ABP_DeployableBase_C** ChildCap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ADeployable*>& CallFunc_GetAttachedDeployableChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ADeployable* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Fireplace_Chimney_Cap_Half_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half, bool K2Node_DynamicCast_bSuccess, class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap, bool K2Node_DynamicCast_bSuccess_1, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess_2, class ABP_DeployableBase_C* CallFunc_GetChildCap_ChildCap);
};

}


