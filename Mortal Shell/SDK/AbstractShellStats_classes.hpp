#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C (0x26C - 0x230)
// WidgetBlueprintGeneratedClass AbstractShellStats.AbstractShellStats_C
class UAbstractShellStats_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            AttributeText;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatBar_C*                            StatBar;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x248(0x18)(Edit, BlueprintVisible)
	int32                                        NumSquares;                                        // 0x260(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumSquaresFilledDefault;                           // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BarAnimDelay;                                      // 0x268(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbstractShellStats_C* GetDefaultObj();

	void UpdateBar(int32 NumSquaresFilled);
	class FText GetText();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_AbstractShellStats(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetText_ReturnValue);
};

}


