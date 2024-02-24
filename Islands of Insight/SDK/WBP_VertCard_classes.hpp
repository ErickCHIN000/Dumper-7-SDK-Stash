#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x33C - 0x260)
// WidgetBlueprintGeneratedClass WBP_VertCard.WBP_VertCard_C
class UWBP_VertCard_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_37;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MainText;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_70;                                      // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           Image;                                             // 0x280(0x88)(Edit, BlueprintVisible)
	class FText                                  Number;                                            // 0x308(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x320(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        MaxCharPixels;                                     // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_VertCard_C* GetDefaultObj();

	void UpdateDisplayByText(const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Min_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	class FText GetText_1();
	class FText GetText_0();
	struct FSlateBrush GetBrush_0();
	void Init(const struct FSlateBrush& Image, class FText Number, class FText Description);
	void OnInitialized();
	void ExecuteUbergraph_WBP_VertCard(int32 EntryPoint, const struct FSlateBrush& K2Node_CustomEvent_Image, class FText K2Node_CustomEvent_Number, class FText K2Node_CustomEvent_Description);
};

}


