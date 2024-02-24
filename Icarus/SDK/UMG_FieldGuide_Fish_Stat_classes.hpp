#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2D8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_FieldGuide_Fish_Stat.UMG_FieldGuide_Fish_Stat_C
class UUMG_FieldGuide_Fish_Stat_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Description;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Unit;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Value;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ValueText;                                         // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  DescriptionText;                                   // 0x2A0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            Texture;                                           // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  UnitText;                                          // 0x2C0(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_FieldGuide_Fish_Stat_C* GetDefaultObj();

	void UpdateValue(class FText Text);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_FieldGuide_Fish_Stat(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


