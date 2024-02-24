#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x428 - 0x404)
// BlueprintGeneratedClass ak_Component_Hero.ak_Component_Hero_C
class UAk_Component_Hero_C : public UAk_Component_Base_Character_C
{
public:
	uint8                                        Pad_253F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x408(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class ACh_Hero_00_C*                         OwnerHero;                                         // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         JumpAkEvent;                                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         LandAkEvent;                                       // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAk_Component_Hero_C* GetDefaultObj();

	void OnLand(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue);
	void OnJump(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ak_Component_Hero(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess);
};

}


