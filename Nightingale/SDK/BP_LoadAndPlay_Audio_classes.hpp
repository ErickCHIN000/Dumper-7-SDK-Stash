#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x81 (0x121 - 0xA0)
// BlueprintGeneratedClass BP_LoadAndPlay_Audio.BP_LoadAndPlay_Audio_C
class UBP_LoadAndPlay_Audio_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               Cached_Location;                                   // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                Cached_Switches;                                   // 0xC0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UAkRtpc*, double>                 CachedRTPCs;                                       // 0xD0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         StopWhenOwnerDestroyed;                            // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_LoadAndPlay_Audio_C* GetDefaultObj();

	void ApplyRTPCs(class UAkComponent* AkComponent, TMap<class UAkRtpc*, double> RTPCs, TArray<class UAkRtpc*>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UAkRtpc* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast);
	void Load_Switches_And_Event__Apply_RTPC__Then_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Event, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, const struct FVector& Location, TArray<class UAkSwitchValue*>& Optional_Switches, TMap<class UAkRtpc*, double> RTPCs, bool StopWhenOwnerDestroyed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Load_Switches_and_Event__then_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Event, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, const struct FVector& Location, TArray<class UAkSwitchValue*>& Optional_Switches, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Load__Switch_and_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Soft_Ak_Event, TArray<class UAkSwitchValue*>& Switches, const struct FVector& Location, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void Load_and_Play_Event(TSoftObjectPtr<class UAkAudioEvent> Soft_Ak_Event, const struct FVector& Location, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void On_Audio_Event_Loaded(class UAkAudioEvent* Audio_Event);
	void On_Audio_Event_and_Switches_Loaded(class UAkAudioEvent* Audio_Event, TArray<class UAkSwitchValue*>& Switches);
	void On_Audio_Event__Switches_And_RTPCs_Loaded(class UAkAudioEvent* Audio_Event, TArray<class UAkSwitchValue*>& Switches);
	void ExecuteUbergraph_BP_LoadAndPlay_Audio(int32 EntryPoint, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UAkAudioEvent* K2Node_CustomEvent_Audio_Event, TArray<class UAkSwitchValue*>& K2Node_CustomEvent_Switches, bool CallFunc_PostAkEventScoped_ReturnValue, class UAkAudioEvent* K2Node_CustomEvent_Audio_Event_1, TArray<class UAkSwitchValue*>& K2Node_CustomEvent_Switches_1, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_1, bool CallFunc_PostAkEventScoped_ReturnValue_1, class UAkAudioEvent* K2Node_CustomEvent_Audio_Event_2, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue_2, bool CallFunc_PostAkEventScoped_ReturnValue_2);
};

}


