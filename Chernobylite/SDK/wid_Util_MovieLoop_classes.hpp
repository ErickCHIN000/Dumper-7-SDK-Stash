#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_Util_MovieLoop.wid_Util_MovieLoop_C
class UWid_Util_MovieLoop_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Texture;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                          MoviePlayer;                                       // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoopStart;                                         // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LoopEnd;                                           // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x280(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             Timespan;                                          // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            LoopEnded;                                         // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_Util_MovieLoop_C* GetDefaultObj();

	void LoadFile(class UMediaSource* Source);
	void Stop(bool StopMediaPlayer);
	void SkipToLoopBeginning();
	void Play(class UMediaSource* Source, float LoopStart, float LoopEnd, bool SingleLoop);
	void PlayAfterOpened(const class FString& OpenedUrl);
	void PreConstruct(bool IsDesignTime);
	void ManualEndLoop();
	void PlayLoop(float LoopStart, float LoopEnd, bool SingleLoop);
	void ExecuteUbergraph_wid_Util_MovieLoop(int32 EntryPoint, class UMediaSource* K2Node_CustomEvent_Source_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_StopMediaPlayer, bool CallFunc_OpenSource_ReturnValue, bool CallFunc_Pause_ReturnValue, class UMediaSource* K2Node_CustomEvent_Source, float K2Node_CustomEvent_LoopStart_1, float K2Node_CustomEvent_LoopEnd_1, bool K2Node_CustomEvent_SingleLoop_1, const class FString& K2Node_CustomEvent_OpenedUrl, bool K2Node_Event_IsDesignTime, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue_1, bool CallFunc_Pause_ReturnValue_1, bool CallFunc_Seek_ReturnValue, float K2Node_CustomEvent_LoopStart, float K2Node_CustomEvent_LoopEnd, bool K2Node_CustomEvent_SingleLoop, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1);
	void LoopEnded__DelegateSignature();
};

}


