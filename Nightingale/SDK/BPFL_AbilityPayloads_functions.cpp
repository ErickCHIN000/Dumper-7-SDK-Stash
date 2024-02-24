#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_AbilityPayloads.BPFL_AbilityPayloads_C
// (None)

class UClass* UBPFL_AbilityPayloads_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_AbilityPayloads_C");

	return Clss;
}


// BPFL_AbilityPayloads_C BPFL_AbilityPayloads.Default__BPFL_AbilityPayloads_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_AbilityPayloads_C* UBPFL_AbilityPayloads_C::GetDefaultObj()
{
	static class UBPFL_AbilityPayloads_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_AbilityPayloads_C*>(UBPFL_AbilityPayloads_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_AbilityPayloads.BPFL_AbilityPayloads_C.GetGameplayTagConatinerFromPayload
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              PayloadIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       GameplayTagContainer                                             (Parm, OutParm)
// struct FGameplayTagContainer       LGameplayTagContainer                                            (Edit, BlueprintVisible)
// int32                              LInteger                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LPayloadIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleLPayload                                                         (Edit, BlueprintVisible)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue   (None)
// bool                               CallFunc_AbilityPayloadHasGameplayTagContainer_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AbilityPayloads_C::GetGameplayTagConatinerFromPayload(const struct FGameplayAbilityPayloadHandle& Payload, int32 PayloadIndex, class UObject* __WorldContext, bool* Success, struct FGameplayTagContainer* GameplayTagContainer, const struct FGameplayTagContainer& LGameplayTagContainer, int32 LInteger, int32 LPayloadIndex, const struct FGameplayAbilityPayloadHandle& LPayload, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasGameplayTagContainer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_AbilityPayloads_C", "GetGameplayTagConatinerFromPayload");

	Params::UBPFL_AbilityPayloads_C_GetGameplayTagConatinerFromPayload_Params Parms{};

	Parms.Payload = Payload;
	Parms.PayloadIndex = PayloadIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.LGameplayTagContainer = LGameplayTagContainer;
	Parms.LInteger = LInteger;
	Parms.LPayloadIndex = LPayloadIndex;
	Parms.LPayload = LPayload;
	Parms.CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue = CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue;
	Parms.CallFunc_AbilityPayloadHasGameplayTagContainer_ReturnValue = CallFunc_AbilityPayloadHasGameplayTagContainer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (GameplayTagContainer != nullptr)
		*GameplayTagContainer = std::move(Parms.GameplayTagContainer);

}


// Function BPFL_AbilityPayloads.BPFL_AbilityPayloads_C.GetIntFromPayload
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              PayloadIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Integer                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LInteger                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LPayloadIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleLPayload                                                         (Edit, BlueprintVisible)
// int32                              CallFunc_GetIntegerFromAbilityPayload_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasInteger_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AbilityPayloads_C::GetIntFromPayload(const struct FGameplayAbilityPayloadHandle& Payload, int32 PayloadIndex, class UObject* __WorldContext, bool* Success, int32* Integer, int32 LInteger, int32 LPayloadIndex, const struct FGameplayAbilityPayloadHandle& LPayload, int32 CallFunc_GetIntegerFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasInteger_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_AbilityPayloads_C", "GetIntFromPayload");

	Params::UBPFL_AbilityPayloads_C_GetIntFromPayload_Params Parms{};

	Parms.Payload = Payload;
	Parms.PayloadIndex = PayloadIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.LInteger = LInteger;
	Parms.LPayloadIndex = LPayloadIndex;
	Parms.LPayload = LPayload;
	Parms.CallFunc_GetIntegerFromAbilityPayload_ReturnValue = CallFunc_GetIntegerFromAbilityPayload_ReturnValue;
	Parms.CallFunc_AbilityPayloadHasInteger_ReturnValue = CallFunc_AbilityPayloadHasInteger_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Integer != nullptr)
		*Integer = Parms.Integer;

}


// Function BPFL_AbilityPayloads.BPFL_AbilityPayloads_C.GetDataTableRowHandleFromPayload
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayAbilityPayloadHandlePayload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              PayloadIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         RowHandle                                                        (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         LDataTableRowHandle                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              LPayloadIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityPayloadHandleLPayload                                                         (Edit, BlueprintVisible)
// struct FDataTableRowHandle         CallFunc_GetDataTableRowHandleFromAbilityPayload_ReturnValue     (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasDataTableRowHandle_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AbilityPayloads_C::GetDataTableRowHandleFromPayload(const struct FGameplayAbilityPayloadHandle& Payload, int32 PayloadIndex, class UObject* __WorldContext, bool* Success, struct FDataTableRowHandle* RowHandle, const struct FDataTableRowHandle& LDataTableRowHandle, int32 LPayloadIndex, const struct FGameplayAbilityPayloadHandle& LPayload, const struct FDataTableRowHandle& CallFunc_GetDataTableRowHandleFromAbilityPayload_ReturnValue, bool CallFunc_AbilityPayloadHasDataTableRowHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_AbilityPayloads_C", "GetDataTableRowHandleFromPayload");

	Params::UBPFL_AbilityPayloads_C_GetDataTableRowHandleFromPayload_Params Parms{};

	Parms.Payload = Payload;
	Parms.PayloadIndex = PayloadIndex;
	Parms.__WorldContext = __WorldContext;
	Parms.LDataTableRowHandle = LDataTableRowHandle;
	Parms.LPayloadIndex = LPayloadIndex;
	Parms.LPayload = LPayload;
	Parms.CallFunc_GetDataTableRowHandleFromAbilityPayload_ReturnValue = CallFunc_GetDataTableRowHandleFromAbilityPayload_ReturnValue;
	Parms.CallFunc_AbilityPayloadHasDataTableRowHandle_ReturnValue = CallFunc_AbilityPayloadHasDataTableRowHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (RowHandle != nullptr)
		*RowHandle = std::move(Parms.RowHandle);

}

}


