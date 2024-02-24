#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x390 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Horizontal_AutoScrollingText.WBP_Horizontal_AutoScrollingText_C
class UWBP_Horizontal_AutoScrollingText_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SZB_SizeBox;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBlock;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x358(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	enum class ETextJustify                      TextJustification;                                 // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WidthOverride;                                     // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       MaxWidthOverride;                                  // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Horizontal_AutoScrollingText_C* GetDefaultObj();

	void SetText(class FText Text);
	void InitializeMaxWIdthOverride(bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast);
	void InitializeWidthOverride(bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_Horizontal_AutoScrollingText(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


