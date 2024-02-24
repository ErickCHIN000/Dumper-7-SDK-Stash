#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x378 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_Structure_Estate.WBP_HUD_Structure_Estate_C
class UWBP_HUD_Structure_Estate_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_ico_respite_active;                            // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_ico_respite_nonactive;                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       RespiteIconSwitcher;                               // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_EstateScore;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               StructureReference;                                // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Structure_Estate_C* GetDefaultObj();

	void UpdateStructure(class UObject* NewStructure, bool CallFunc_IsValid_ReturnValue);
	void RefreshRespitePoint(TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEstateComponent* CallFunc_GetStructureEstateComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsRespitePoint_ReturnValue);
	void UnbindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UStructureEstateComponent* CallFunc_GetStructureEstateComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RefreshEstateScore(class UStructureEstateComponent* EstateComponent, bool CallFunc_IsRespitePoint_ReturnValue, float CallFunc_GetEstateScore_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UStructureEstateComponent* CallFunc_GetStructureEstateComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Round_A_ImplicitCast);
	void OnEstateScoreUpdated(class UStructureEstateComponent* EstateComponent, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UStructureEstateComponent* CallFunc_GetStructureEstateComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetEstateScore_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Round_A_ImplicitCast);
	void OnRespitePointUpdated(bool bIsRespitePoint, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default);
	void BindEvents(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureEstateInterface> K2Node_DynamicCast_AsStructure_Estate_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureEstateComponent* CallFunc_GetStructureEstateComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void RefreshWidget(double LWaterRemainingFraction, const struct FLinearColor& NameColor_Complete, const struct FLinearColor& NameColor_NotComplete, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Structure_Estate(int32 EntryPoint);
};

}


