#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RepairCraftTable.RepairCraftTable_C
// (None)

class UClass* URepairCraftTable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RepairCraftTable_C");

	return Clss;
}


// RepairCraftTable_C RepairCraftTable.Default__RepairCraftTable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URepairCraftTable_C* URepairCraftTable_C::GetDefaultObj()
{
	static class URepairCraftTable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URepairCraftTable_C*>(URepairCraftTable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RepairCraftTable.RepairCraftTable_C.GetCraftTableName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      CraftTableObjectName                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGenericCraftTable_C*        K2Node_DynamicCast_AsGeneric_Craft_Table                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void URepairCraftTable_C::GetCraftTableName(class FString* CraftTableObjectName, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AGenericCraftTable_C* K2Node_DynamicCast_AsGeneric_Craft_Table, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetObjectName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RepairCraftTable_C", "GetCraftTableName");

	Params::URepairCraftTable_C_GetCraftTableName_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsGeneric_Craft_Table = K2Node_DynamicCast_AsGeneric_Craft_Table;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CraftTableObjectName != nullptr)
		*CraftTableObjectName = std::move(Parms.CraftTableObjectName);

}


// Function RepairCraftTable.RepairCraftTable_C.GetProgressMax
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 URepairCraftTable_C::GetProgressMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RepairCraftTable_C", "GetProgressMax");

	Params::URepairCraftTable_C_GetProgressMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RepairCraftTable.RepairCraftTable_C.OnActorUsed_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Sender                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      InteractedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsHoldUsed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URepairCraftTable_C::OnActorUsed_Event_0(class ASHPlayerCharacter* Sender, class AActor* InteractedActor, bool IsHoldUsed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RepairCraftTable_C", "OnActorUsed_Event_0");

	Params::URepairCraftTable_C_OnActorUsed_Event_0_Params Parms{};

	Parms.Sender = Sender;
	Parms.InteractedActor = InteractedActor;
	Parms.IsHoldUsed = IsHoldUsed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RepairCraftTable.RepairCraftTable_C.OnGivePlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URepairCraftTable_C::OnGivePlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RepairCraftTable_C", "OnGivePlayer");

	Params::URepairCraftTable_C_OnGivePlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RepairCraftTable.RepairCraftTable_C.OnRemoveFromPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URepairCraftTable_C::OnRemoveFromPlayer(class ASHPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RepairCraftTable_C", "OnRemoveFromPlayer");

	Params::URepairCraftTable_C_OnRemoveFromPlayer_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RepairCraftTable.RepairCraftTable_C.ExecuteUbergraph_RepairCraftTable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_CustomEvent_Sender                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_InteractedActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsHoldUsed                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGenericCraftTable_C*        K2Node_DynamicCast_AsGeneric_Craft_Table                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Player_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void URepairCraftTable_C::ExecuteUbergraph_RepairCraftTable(int32 EntryPoint, class ASHPlayerCharacter* K2Node_CustomEvent_Sender, class AActor* K2Node_CustomEvent_InteractedActor, bool K2Node_CustomEvent_IsHoldUsed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGenericCraftTable_C* K2Node_DynamicCast_AsGeneric_Craft_Table, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RepairCraftTable_C", "ExecuteUbergraph_RepairCraftTable");

	Params::URepairCraftTable_C_ExecuteUbergraph_RepairCraftTable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Sender = K2Node_CustomEvent_Sender;
	Parms.K2Node_CustomEvent_InteractedActor = K2Node_CustomEvent_InteractedActor;
	Parms.K2Node_CustomEvent_IsHoldUsed = K2Node_CustomEvent_IsHoldUsed;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsGeneric_Craft_Table = K2Node_DynamicCast_AsGeneric_Craft_Table;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Event_Player_1 = K2Node_Event_Player_1;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


