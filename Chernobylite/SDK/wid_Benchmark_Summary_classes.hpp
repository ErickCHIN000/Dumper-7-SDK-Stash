#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x3F0 - 0x260)
// WidgetBlueprintGeneratedClass wid_Benchmark_Summary.wid_Benchmark_Summary_C
class UWid_Benchmark_Summary_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            AA;                                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            AvarageFPS;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BenchmarkText;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CPUName;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DD;                                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DLSS;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DLSS_COntainer;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DLSSLabel;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            EFF;                                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FinishedPercentage;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FL;                                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FOV;                                               // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FQ;                                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FSR;                                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        FSR_Container;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GPUName;                                           // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GQ;                                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MaxFPS;                                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MinFPS;                                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               NextBenchmarkLayout;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            OnePer;                                            // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PP;                                                // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RAMAmount;                                         // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Res;                                               // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Revision;                                          // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RS;                                                // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RS_Container;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RT;                                                // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SHA;                                               // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Tex;                                               // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VSC;                                               // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            WM;                                                // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_Benchmark_C*                       BActor;                                            // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OnePercentageAvg;                                  // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          Values;                                            // 0x378(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  NextBenchmarkText;                                 // 0x388(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          DLSSNames;                                         // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          FSRNames;                                          // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FText>                          FSRNames2;                                         // 0x3C0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                NewVar_0;                                          // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FText>                          ValuesRT;                                          // 0x3E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_Benchmark_Summary_C* GetDefaultObj();

	void SetNextBenchmarkTime(float Time, class FText CallFunc_Conv_FloatToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetBenchmarkActor(class Abp_Benchmark_C* BActor);
	void Start();
	void ExecuteUbergraph_wid_Benchmark_Summary(int32 EntryPoint, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable_1, bool Temp_bool_Variable_4, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_6, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class FText Temp_text_Variable_2, bool Temp_bool_Variable_7, class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class Abp_Benchmark_C* K2Node_Event_BActor, float CallFunc_GetTotalAvarageFPS_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_1, float CallFunc_GetMinFPS_ReturnValue, float CallFunc_GetMaxFPS_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_2, class FText CallFunc_Conv_FloatToText_ReturnValue_3, class FText Temp_text_Variable_3, float CallFunc_GetTotalAvarageFPS_ReturnValue_1, float CallFunc_GetMinFPS_ReturnValue_1, float CallFunc_GetMaxFPS_ReturnValue_1, class FText Temp_text_Variable_4, float CallFunc_GetOnePercentAvarageFPS_Result, const struct FBenchmarkFinalResult& K2Node_MakeStruct_BenchmarkFinalResult, class FText Temp_text_Variable_5, const struct FBenchmarkHardware& CallFunc_BenchmarkHardware_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_4, const class FString& CallFunc_GetGameVersionString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetRTSetting_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_GetScreenPercentage_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_Conv_StringToFloat_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue_5, class FText CallFunc_Array_Get_Item_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_GetFovValue_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_FloatToText_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, const struct FIntPoint& CallFunc_GetDefaultResolution_ReturnValue, float CallFunc_GetFrameRateLimit_ReturnValue, int32 CallFunc_GetViewDistanceQuality_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText CallFunc_Array_Get_Item_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_7, bool CallFunc_IsVSyncEnabled_ReturnValue, class FText K2Node_Select_Default_1, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, int32 CallFunc_GetPostProcessingQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, class FText CallFunc_Array_Get_Item_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, TArray<int32>& K2Node_MakeArray_Array, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_MinOfIntArray_IndexOfMinValue, int32 CallFunc_MinOfIntArray_MinValue, int32 CallFunc_MaxOfIntArray_IndexOfMaxValue, int32 CallFunc_MaxOfIntArray_MaxValue, const struct FIntPoint& K2Node_Select_Default_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_1, class FText CallFunc_Array_Get_Item_4, const struct FIntPoint& K2Node_Select_Default_3, enum class EWindowMode Temp_byte_Variable_6, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, class FText K2Node_Select_Default_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_8, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Array_Get_Item_5, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText K2Node_Select_Default_5, class FText K2Node_Select_Default_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, class FText CallFunc_Array_Get_Item_6, class FText Temp_text_Variable_6, class FText CallFunc_Array_Get_Item_7, class FText CallFunc_Array_Get_Item_8, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_Conv_NameToString_ReturnValue, enum class EUDLSSMode CallFunc_GetDLSSMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_9, class FText Temp_text_Variable_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_5, class FText CallFunc_Array_Get_Item_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_10, bool Temp_bool_Variable_8, class FText K2Node_Select_Default_9, const class FString& CallFunc_Conv_TextToString_ReturnValue_11);
};

}

