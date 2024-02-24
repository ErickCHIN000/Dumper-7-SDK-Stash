#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8C (0x2EC - 0x260)
// WidgetBlueprintGeneratedClass UMG_FishUnlock.UMG_FishUnlock_C
class UUMG_FishUnlock_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FishUnlockAnimation;                               // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            CaughtTitle;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FishImage;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Highlight;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_115;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_228;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Length;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Name;                                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Quality;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Unlock;                                            // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Weight;                                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFishTypeTracking                     Tracking;                                          // 0x2C0(0x28)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	int32                                        FishUnlockType;                                    // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_FishUnlock_C* GetDefaultObj();

	void PopulateFishInfo(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool CallFunc_IsMatch_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_IsMatch_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsMatch_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_5, bool Temp_bool_Variable_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Divide_FloatFloat_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Conv_FloatToText_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_IsMatch_ReturnValue_3, const struct FFishData& CallFunc_GetFishDataStruct_FishData, enum class EValid CallFunc_GetFishDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class FText CallFunc_TextToUpper_ReturnValue);
	void OnLoaded_8A3E72E1463B6770DBCD4A9745B4F2AD(class UObject* Loaded);
	void Remove();
	void Construct();
	void ExecuteUbergraph_UMG_FishUnlock(int32 EntryPoint, const struct FKeybindingsRowHandle& CallFunc_MakeLiteralKeybindings_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class FText CallFunc_GetTextForKeybind_ReturnValue, class UObject* Temp_object_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFishData& CallFunc_GetFishDataStruct_FishData, enum class EValid CallFunc_GetFishDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


