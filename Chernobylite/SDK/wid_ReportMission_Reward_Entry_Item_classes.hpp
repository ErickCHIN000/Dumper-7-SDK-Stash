#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x2C4 - 0x260)
// WidgetBlueprintGeneratedClass wid_ReportMission_Reward_Entry_Item.wid_ReportMission_Reward_Entry_Item_C
class UWid_ReportMission_Reward_Entry_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Image_1;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemAmount;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemImage;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Selected;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                            InImage;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  InText;                                            // 0x290(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  InDesc;                                            // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                        Amount;                                            // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_ReportMission_Reward_Entry_Item_C* GetDefaultObj();

	void SetSelected(bool NewVisibility, const struct FLinearColor& Color, enum class ESlateVisibility NewLocalVar_0, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void Construct();
	void ExecuteUbergraph_wid_ReportMission_Reward_Entry_Item(int32 EntryPoint);
};

}


