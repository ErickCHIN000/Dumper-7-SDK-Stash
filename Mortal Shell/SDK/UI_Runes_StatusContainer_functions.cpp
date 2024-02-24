#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Runes_StatusContainer.UI_Runes_StatusContainer_C
// (None)

class UClass* UUI_Runes_StatusContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Runes_StatusContainer_C");

	return Clss;
}


// UI_Runes_StatusContainer_C UI_Runes_StatusContainer.Default__UI_Runes_StatusContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Runes_StatusContainer_C* UUI_Runes_StatusContainer_C::GetDefaultObj()
{
	static class UUI_Runes_StatusContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Runes_StatusContainer_C*>(UUI_Runes_StatusContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.ResetEverything
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_StatusContainer_C::ResetEverything()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "ResetEverything");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseRow_SpecialEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseRow_SpecialEffect(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseRow_SpecialEffect");

	Params::UUI_Runes_StatusContainer_C_IncreaseRow_SpecialEffect_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseRow_Improvement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseRow_Improvement(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseRow_Improvement");

	Params::UUI_Runes_StatusContainer_C_IncreaseRow_Improvement_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseRow_Special
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseRow_Special(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseRow_Special");

	Params::UUI_Runes_StatusContainer_C_IncreaseRow_Special_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseRow_Misc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseRow_Misc(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseRow_Misc");

	Params::UUI_Runes_StatusContainer_C_IncreaseRow_Misc_Params Parms{};

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseUniqueID_SpecialEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseUniqueID_SpecialEffect(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseUniqueID_SpecialEffect");

	Params::UUI_Runes_StatusContainer_C_IncreaseUniqueID_SpecialEffect_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseUniqueID_Improvement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseUniqueID_Improvement(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseUniqueID_Improvement");

	Params::UUI_Runes_StatusContainer_C_IncreaseUniqueID_Improvement_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseUniqueID_Special
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseUniqueID_Special(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseUniqueID_Special");

	Params::UUI_Runes_StatusContainer_C_IncreaseUniqueID_Special_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.IncreaseUniqueID_Misc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::IncreaseUniqueID_Misc(int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "IncreaseUniqueID_Misc");

	Params::UUI_Runes_StatusContainer_C_IncreaseUniqueID_Misc_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.SetOrderIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_StatusContainer_C::SetOrderIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "SetOrderIDs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.RemoveRuneStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_StatusContainer_C::RemoveRuneStatusIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "RemoveRuneStatusIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.AddRuneStatusIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Rune_ID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category      Rune_Category                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Type          Rune_Type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Rune_Tier                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Rune_Level                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Rune_Texture                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rune_Misc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_Rune_Tier, class UTexture2D*>Rune_Backgrounds                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              UniqueId                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_Rune_Tier, class UTexture2D*>Local_RuneBackgrounds                                            (Edit, BlueprintVisible)
// float                              Local_RuneMisc                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Local_RuneTexture                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_RuneLevel                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Local_RuneTier                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Type          Local_RuneType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category      Local_RuneCategory                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_RuneID                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class Enum_Rune_Tier, class UTexture2D*>K2Node_MakeVariable_MakeVariableOutput                           (None)
// TArray<class FName>                CallFunc_GetSpecialRunesIDs_IDs                                  (ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RuneStatusIcon_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RuneStatusIcon_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RuneStatusIcon_C*        CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RuneStatusIcon_C*        CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue_3                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_StatusContainer_C::AddRuneStatusIcon(class FName Rune_ID, enum class Enum_Rune_Category Rune_Category, enum class Enum_Rune_Type Rune_Type, enum class Enum_Rune_Tier Rune_Tier, int32 Rune_Level, class UTexture2D* Rune_Texture, float Rune_Misc, TMap<enum class Enum_Rune_Tier, class UTexture2D*> Rune_Backgrounds, int32* UniqueId, TMap<enum class Enum_Rune_Tier, class UTexture2D*> Local_RuneBackgrounds, float Local_RuneMisc, class UTexture2D* Local_RuneTexture, int32 Local_RuneLevel, enum class Enum_Rune_Tier Local_RuneTier, enum class Enum_Rune_Type Local_RuneType, enum class Enum_Rune_Category Local_RuneCategory, class FName Local_RuneID, TMap<enum class Enum_Rune_Tier, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput, TArray<class FName>& CallFunc_GetSpecialRunesIDs_IDs, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue_2, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue_3, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "AddRuneStatusIcon");

	Params::UUI_Runes_StatusContainer_C_AddRuneStatusIcon_Params Parms{};

	Parms.Rune_ID = Rune_ID;
	Parms.Rune_Category = Rune_Category;
	Parms.Rune_Type = Rune_Type;
	Parms.Rune_Tier = Rune_Tier;
	Parms.Rune_Level = Rune_Level;
	Parms.Rune_Texture = Rune_Texture;
	Parms.Rune_Misc = Rune_Misc;
	Parms.Rune_Backgrounds = Rune_Backgrounds;
	Parms.Local_RuneBackgrounds = Local_RuneBackgrounds;
	Parms.Local_RuneMisc = Local_RuneMisc;
	Parms.Local_RuneTexture = Local_RuneTexture;
	Parms.Local_RuneLevel = Local_RuneLevel;
	Parms.Local_RuneTier = Local_RuneTier;
	Parms.Local_RuneType = Local_RuneType;
	Parms.Local_RuneCategory = Local_RuneCategory;
	Parms.Local_RuneID = Local_RuneID;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetSpecialRunesIDs_IDs = CallFunc_GetSpecialRunesIDs_IDs;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_1 = CallFunc_AddChildToUniformGrid_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_2 = CallFunc_AddChildToUniformGrid_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue_3 = CallFunc_AddChildToUniformGrid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (UniqueId != nullptr)
		*UniqueId = Parms.UniqueId;

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Runes_StatusContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Runes_StatusContainer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_StatusContainer.UI_Runes_StatusContainer_C.ExecuteUbergraph_UI_Runes_StatusContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Runes_StatusContainer_C::ExecuteUbergraph_UI_Runes_StatusContainer(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_StatusContainer_C", "ExecuteUbergraph_UI_Runes_StatusContainer");

	Params::UUI_Runes_StatusContainer_C_ExecuteUbergraph_UI_Runes_StatusContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


