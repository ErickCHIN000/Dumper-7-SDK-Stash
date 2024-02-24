#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x2D0 - 0x220)
// BlueprintGeneratedClass bp_Benchmark.bp_Benchmark_C
class Abp_Benchmark_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaAccumulator;                                  // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FramesCount;                                       // 0x234(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDelta;                                          // 0x238(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDelta;                                          // 0x23C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Benchmark_C*                      MainWidget;                                        // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                DeltaBuffer;                                       // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            ForceFinishBenchmark;                              // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<float>                                DeltaCircleBuffer;                                 // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        Timer;                                             // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                FPSBufferAvarage;                                  // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ACameraRig_Rail*                       CameraRigRail;                                     // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PercentageDone;                                    // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaBetweenSmoothedFrames;                        // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class EEventMap>                 MapsToBenchmark;                                   // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class EEventMap>                 MapsToBenchmark_DevOnly;                           // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        NextBenchmarkIn;                                   // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewBenchmarkCountdown;                             // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2021[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_Loading_C*                        LoadingWidget;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_Benchmark_C* GetDefaultObj();

	void GetCurrentMapIndex(class FName MapName, int32* MapIndex, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, int32 CallFunc_Array_Find_ReturnValue);
	void GetNextBenchmarkMap(class FName* Map, TMap<enum class EEventMap, struct FStruct_MapInformation> Temp_byte_Variable, bool CallFunc_IsPackagedForDistribution_ReturnValue, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, int32 CallFunc_GetCurrentMapIndex_MapIndex, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EEventMap CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FStruct_MapInformation& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void SetCameraRigRail(class ACameraRig_Rail* Camera);
	void CalculateSmoothedFPS(float Avarage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	float GetSmoothedAvarageFPS(float Avarage, int32 CallFunc_Array_LastIndex_ReturnValue, float CallFunc_Array_Get_Item);
	void GetOnePercentAvarageFPS(float* Result, float OnePercentageNum, const TArray<float>& OnePercentage, float Avarage, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TArray<float>& CallFunc_BenchmarkGetMaxXPercent_ReturnValue);
	float GetTotalAvarageFPS(float Avarage, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Array_Get_Item, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	float GetMaxFPS(int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue);
	float GetMinFPS(int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue);
	float GetCurrentAvarageFPS(float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void InpActEvt_Escape_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void InpActEvt_Console_Movement_Crouch_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_PC_Interaction_UI_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_Console_Shortcuts_Pause_K2Node_InputActionEvent_0(const struct FKey& Key);
	void Start();
	void ReceiveTick(float DeltaSeconds);
	void End();
	void ReceiveBeginPlay();
	void Bench();
	void ExecuteUbergraph_bp_Benchmark(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_2, int32 Temp_int_Array_Index_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FKey& K2Node_InputKeyEvent_Key, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, float K2Node_Event_DeltaSeconds, int32 CallFunc_Add_IntInt_ReturnValue_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_Benchmark_C* CallFunc_Create_ReturnValue, class UClass* CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, TArray<class UWid_MainMenu_02_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, FDelegateProperty_ Temp_delegate_Variable, class UWid_MainMenu_02_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_IsBenchmark_bSuccess, class UWid_Loading_C* CallFunc_Create_ReturnValue_1, TArray<class UWid_MainMenu_Gamma_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, class UWid_MainMenu_Gamma_C* CallFunc_Array_Get_Item_1, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_FMin_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Multiply_FloatFloat_ReturnValue, class FName CallFunc_GetNextBenchmarkMap_Map, float CallFunc_FMax_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, class UWid_Benchmark_Summary_C* K2Node_DynamicCast_AsWid_Benchmark_Summary, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FName CallFunc_GetNextBenchmarkMap_Map_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class UWid_Benchmark_Summary_C* K2Node_DynamicCast_AsWid_Benchmark_Summary_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsVisible_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess_2, TArray<class UWid_BlackScreenFade_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_2, FDelegateProperty_ Temp_delegate_Variable_1, class UWid_BlackScreenFade_C* CallFunc_Array_Get_Item_2, int32 CallFunc_PostEvent_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void ForceFinishBenchmark__DelegateSignature();
};

}


