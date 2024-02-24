#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x278 - 0x230)
// WidgetBlueprintGeneratedClass BriefFadeToBlack.BriefFadeToBlack_C
class UBriefFadeToBlack_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      FadeToBlack;                                       // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            FadeCompleted;                                     // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        TickingCounter;                                    // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlaybackSpeed;                                     // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         PlayFadeInAnim;                                    // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_CB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            FadeHalfWay;                                       // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBriefFadeToBlack_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTBriefFadeToBlack_1();
	void SequenceEvent__ENTRYPOINTBriefFadeToBlack_0();
	void SequenceEvent_0();
	void Construct();
	void FadeHalfWayEvent();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_BriefFadeToBlack(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FadeHalfWay__DelegateSignature();
	void FadeCompleted__DelegateSignature();
};

}


