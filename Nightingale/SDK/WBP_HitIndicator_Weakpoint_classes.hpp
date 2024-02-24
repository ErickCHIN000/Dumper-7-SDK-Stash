#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x358 - 0x340)
// WidgetBlueprintGeneratedClass WBP_HitIndicator_Weakpoint.WBP_HitIndicator_Weakpoint_C
class UWBP_HitIndicator_Weakpoint_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeIn;                                            // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_crit_indicator_weakspot;                       // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HitIndicator_Weakpoint_C* GetDefaultObj();

	void RemoveHitIndication();
	void Construct();
	void AddHitIndication();
	void Destruct();
	void ExecuteUbergraph_WBP_HitIndicator_Weakpoint(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UWBP_CrosshairBase_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWBP_CrosshairBase_C* CallFunc_Array_Get_Item, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1);
};

}


