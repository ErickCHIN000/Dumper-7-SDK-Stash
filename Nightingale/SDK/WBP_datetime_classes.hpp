#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x378 - 0x350)
// WidgetBlueprintGeneratedClass WBP_datetime.WBP_datetime_C
class UWBP_datetime_C : public UNWXDateTime
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Time;                                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ABP_TimeOfDayManager_C*                Time_Of_Day_Manager;                               // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URealmTimerComponent*                  RealmTimerComponent;                               // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USpatialWorldTimeComponent*            SpatialWorldTimeComponent;                         // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_datetime_C* GetDefaultObj();

	void Unbindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue);
	void FormatRealmTimeText(bool IsAfternoon, int32 Minutes, int32 Hours, double Time24h, const struct FDateTime& CallFunc_GetGameWorldDateTime_ReturnValue, class FText CallFunc_FormatDateTime_ReturnValue);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_datetime(int32 EntryPoint, class ABP_TimeOfDayManager_C* CallFunc_GetActorOfClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class URealmTimerComponent* CallFunc_GetComponentByClass_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class USpatialWorldTimeComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FTimerHandle& CallFunc_SetRealmTimerByFunctionName_ReturnValue);
};

}


