#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x28C - 0x260)
// WidgetBlueprintGeneratedClass W_FishEntryGrid.W_FishEntryGrid_C
class UW_FishEntryGrid_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                FishImage;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Percent;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFishDataEnum                         Fish;                                              // 0x278(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        PercentValue;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UW_FishEntryGrid_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_W_FishEntryGrid(int32 EntryPoint, const struct FFishDataRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FFishData& CallFunc_GetFishDataStruct_FishData, enum class EValid CallFunc_GetFishDataStruct_Paths, float CallFunc_Multiply_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool K2Node_Event_IsDesignTime, class UBestiaryManagerComponent* CallFunc_GetLocalBestiaryManagerComponent_ReturnValue, const struct FFishTypeTracking& CallFunc_GetFishDetails_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


