#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fog_Chest_StormMode.Fog_Chest_StormMode_C
// (Actor)

class UClass* AFog_Chest_StormMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fog_Chest_StormMode_C");

	return Clss;
}


// Fog_Chest_StormMode_C Fog_Chest_StormMode.Default__Fog_Chest_StormMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFog_Chest_StormMode_C* AFog_Chest_StormMode_C::GetDefaultObj()
{
	static class AFog_Chest_StormMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFog_Chest_StormMode_C*>(AFog_Chest_StormMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.AskRandomUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::AskRandomUpgrade(struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "AskRandomUpgrade");

	Params::AFog_Chest_StormMode_C_AskRandomUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.AskRandomWeaponUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "AskRandomWeaponUpgrade");

	Params::AFog_Chest_StormMode_C_AskRandomWeaponUpgrade_Params Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.AskRandomDarkFormUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "AskRandomDarkFormUpgrade");

	Params::AFog_Chest_StormMode_C_AskRandomDarkFormUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.RemoveTar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_Chest_StormMode_C::RemoveTar(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "RemoveTar");

	Params::AFog_Chest_StormMode_C_RemoveTar_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.HandleCurrencyType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_Chest_StormMode_C::HandleCurrencyType(const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName Temp_name_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "HandleCurrencyType");

	Params::AFog_Chest_StormMode_C_HandleCurrencyType_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.AddRandomMortalInstinct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_Chest_StormMode_C::AddRandomMortalInstinct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "AddRandomMortalInstinct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForNearbyEnemies_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_Chest_StormMode_C::OnActorUsed(class APlayerController* Controller, bool* Success, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_CheckForNearbyEnemies_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "OnActorUsed");

	Params::AFog_Chest_StormMode_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_CheckForNearbyEnemies_ReturnValue = CallFunc_CheckForNearbyEnemies_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.InitInteractText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_Chest_StormMode_C::InitInteractText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "InitInteractText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_PillarType         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_LinearColorToVector_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::UserConstructionScript(enum class Enum_PillarType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "UserConstructionScript");

	Params::AFog_Chest_StormMode_C_UserConstructionScript_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue = CallFunc_Conv_LinearColorToVector_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_LinearColorToVector_ReturnValue_1 = CallFunc_Conv_LinearColorToVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.InitiliazeSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SeedID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitialSeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::InitiliazeSeed(int32 SeedID, int32 InitialSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "InitiliazeSeed");

	Params::AFog_Chest_StormMode_C_InitiliazeSeed_Params Parms{};

	Parms.SeedID = SeedID;
	Parms.InitialSeed = InitialSeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.SetObjectMainChance%
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rune_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Item_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::SetObjectMainChance_(float Rune_Chance, float Item_Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "SetObjectMainChance%");

	Params::AFog_Chest_StormMode_C_SetObjectMainChance__Params Parms{};

	Parms.Rune_Chance = Rune_Chance;
	Parms.Item_Chance = Item_Chance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.RemoveObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_Chest_StormMode_C::RemoveObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "RemoveObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.SetPillarType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_PillarType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::SetPillarType(enum class Enum_PillarType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "SetPillarType");

	Params::AFog_Chest_StormMode_C_SetPillarType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.SetObjectAsTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_Chest_StormMode_C::SetObjectAsTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "SetObjectAsTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.ReRandomizeEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSeed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFog_Chest_StormMode_C::ReRandomizeEnemy(int32 NewSeed, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "ReRandomizeEnemy");

	Params::AFog_Chest_StormMode_C_ReRandomizeEnemy_Params Parms{};

	Parms.NewSeed = NewSeed;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFog_Chest_StormMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.OnFogChestOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AFog_Chest_StormMode_C::OnFogChestOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "OnFogChestOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fog_Chest_StormMode.Fog_Chest_StormMode_C.ExecuteUbergraph_Fog_Chest_StormMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SeedID                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InitialSeed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Rune_Chance                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Item_Chance                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_PillarType         K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewSeed                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFog_Chest_StormMode_C::ExecuteUbergraph_Fog_Chest_StormMode(int32 EntryPoint, int32 K2Node_Event_SeedID, int32 K2Node_Event_InitialSeed, float K2Node_Event_Rune_Chance, float K2Node_Event_Item_Chance, enum class Enum_PillarType K2Node_Event_Type, int32 K2Node_Event_NewSeed, float K2Node_Event_Delay, bool CallFunc_IsMyNameInChangedSet_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fog_Chest_StormMode_C", "ExecuteUbergraph_Fog_Chest_StormMode");

	Params::AFog_Chest_StormMode_C_ExecuteUbergraph_Fog_Chest_StormMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SeedID = K2Node_Event_SeedID;
	Parms.K2Node_Event_InitialSeed = K2Node_Event_InitialSeed;
	Parms.K2Node_Event_Rune_Chance = K2Node_Event_Rune_Chance;
	Parms.K2Node_Event_Item_Chance = K2Node_Event_Item_Chance;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_NewSeed = K2Node_Event_NewSeed;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


