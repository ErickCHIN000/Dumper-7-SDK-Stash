#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x340 - 0x318)
// WidgetBlueprintGeneratedClass WBP_GameHintModalExtraPuzzles.WBP_GameHintModalExtraPuzzles_C
class UWBP_GameHintModalExtraPuzzles_C : public UInputWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ModalFade;                                         // 0x320(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BlackShade;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameHintModalBody_C*              WBP_GameHintModalBody;                             // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameHintModalPicture_C*           WBP_GameHintModalPicture;                          // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_GameHintModalExtraPuzzles_C* GetDefaultObj();

	void Construct();
	void OnExitClicked();
	void CustomEvent_0();
	void Setup(class UObject* In_Brush_Image, class FText TitleText, class FText BodyText);
	void ExecuteUbergraph_WBP_GameHintModalExtraPuzzles(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UObject* K2Node_CustomEvent_In_Brush_Image, class FText K2Node_CustomEvent_TitleText, class FText K2Node_CustomEvent_BodyText, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
};

}


