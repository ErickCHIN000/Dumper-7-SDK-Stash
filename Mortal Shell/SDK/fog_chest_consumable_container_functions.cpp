#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass fog_chest_consumable_container.fog_chest_consumable_container_C
// (Actor)

class UClass* AFog_chest_consumable_container_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("fog_chest_consumable_container_C");

	return Clss;
}


// fog_chest_consumable_container_C fog_chest_consumable_container.Default__fog_chest_consumable_container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFog_chest_consumable_container_C* AFog_chest_consumable_container_C::GetDefaultObj()
{
	static class AFog_chest_consumable_container_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFog_chest_consumable_container_C*>(AFog_chest_consumable_container_C::StaticClass()->DefaultObject);

	return Default;
}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.DisableFogChest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::DisableFogChest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "DisableFogChest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.EnableFogChest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::EnableFogChest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "EnableFogChest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_chest_consumable_container_C::OnActorUsed(class APlayerController* Controller, bool* Success, bool CallFunc_OnActorUsed_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "OnActorUsed");

	Params::AFog_chest_consumable_container_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.ContainerLooted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUniqueDHID_ID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemJustOnceItem_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerLooted_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_chest_consumable_container_C::ContainerLooted(bool* Success, class FName CallFunc_GetUniqueDHID_ID, bool CallFunc_IsItemJustOnceItem_bYes, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_ContainerLooted_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "ContainerLooted");

	Params::AFog_chest_consumable_container_C_ContainerLooted_Params Parms{};

	Parms.CallFunc_GetUniqueDHID_ID = CallFunc_GetUniqueDHID_ID;
	Parms.CallFunc_IsItemJustOnceItem_bYes = CallFunc_IsItemJustOnceItem_bYes;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_ContainerLooted_Success = CallFunc_ContainerLooted_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.InitializeInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUniqueDHID_ID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_RowName_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetJustOnceItemReplacement_ReplacementID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemJustOnceItem_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryItem>      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_LoadInventoryItems_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_chest_consumable_container_C::InitializeInventory(bool* Success, bool Temp_bool_Variable, class FName CallFunc_GetUniqueDHID_ID, int32 CallFunc_GetNamedPCInt_Value, class FName CallFunc_RowName_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class FName CallFunc_GetJustOnceItemReplacement_ReplacementID, bool CallFunc_IsItemJustOnceItem_bYes, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_Select_Default, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<struct FInventoryItem>& K2Node_MakeArray_Array, bool CallFunc_LoadInventoryItems_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "InitializeInventory");

	Params::AFog_chest_consumable_container_C_InitializeInventory_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetUniqueDHID_ID = CallFunc_GetUniqueDHID_ID;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_RowName_ReturnValue = CallFunc_RowName_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetJustOnceItemReplacement_ReplacementID = CallFunc_GetJustOnceItemReplacement_ReplacementID;
	Parms.CallFunc_IsItemJustOnceItem_bYes = CallFunc_IsItemJustOnceItem_bYes;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LoadInventoryItems_Success = CallFunc_LoadInventoryItems_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.FogON
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::FogON()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "FogON");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.FogOFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::FogOFF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "FogOFF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.FadeEmissiveOnFish
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_chest_consumable_container_C::FadeEmissiveOnFish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "FadeEmissiveOnFish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function fog_chest_consumable_container.fog_chest_consumable_container_C.ExecuteUbergraph_fog_chest_consumable_container
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_chest_consumable_container_C::ExecuteUbergraph_fog_chest_consumable_container(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_IsMyNameInChangedSet_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("fog_chest_consumable_container_C", "ExecuteUbergraph_fog_chest_consumable_container");

	Params::AFog_chest_consumable_container_C_ExecuteUbergraph_fog_chest_consumable_container_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue_1 = CallFunc_IsMyNameInChangedSet_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


