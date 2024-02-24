#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x790 - 0x774)
// BlueprintGeneratedClass BP_Fireplace_Chimney_Cap_Half.BP_Fireplace_Chimney_Cap_Half_C
class ABP_Fireplace_Chimney_Cap_Half_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_22DD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_Smoke_FX;                                       // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Niagara;                                     // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fireplace_Chimney_Cap_Half_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Fireplace_Chimney_Cap_Half(int32 EntryPoint, class ADeployable* CallFunc_GetAttachedDeployableParent_ReturnValue, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess, class ABP_Fireplace_C* K2Node_DynamicCast_AsBP_Fireplace, bool K2Node_DynamicCast_bSuccess_1, class ABP_DeployableBase_C* CallFunc_GetParentFireplace_Parent, class ABP_Fireplace_C* K2Node_DynamicCast_AsBP_Fireplace_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


