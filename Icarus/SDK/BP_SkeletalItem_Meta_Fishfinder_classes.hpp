#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5C0 - 0x5B0)
// BlueprintGeneratedClass BP_SkeletalItem_Meta_Fishfinder.BP_SkeletalItem_Meta_Fishfinder_C
class ABP_SkeletalItem_Meta_Fishfinder_C : public ABP_SkeletalItem_Scanner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      ScreenWidget;                                      // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Meta_Fishfinder_C* GetDefaultObj();

	void Play_Fish_Finder_Finish_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void Play_Sonar_Sound(enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	class UWidgetComponent* GetScreenWidget();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Meta_Fishfinder(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UW_Fishfinder_C* K2Node_DynamicCast_AsW_Fishfinder, bool K2Node_DynamicCast_bSuccess);
};

}


