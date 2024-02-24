#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CGHUD.CGHUD_C
// (Actor)

class UClass* ACGHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CGHUD_C");

	return Clss;
}


// CGHUD_C CGHUD.Default__CGHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACGHUD_C* ACGHUD_C::GetDefaultObj()
{
	static class ACGHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACGHUD_C*>(ACGHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CGHUD.CGHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACGHUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGHUD_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CGHUD.CGHUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int32                              SizeX                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SizeY                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACGHUD_C::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGHUD_C", "ReceiveDrawHUD");

	Params::ACGHUD_C_ReceiveDrawHUD_Params Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGHUD.CGHUD_C.ShowGasmaskFilterIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Empty                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACGHUD_C::ShowGasmaskFilterIcon(bool Empty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGHUD_C", "ShowGasmaskFilterIcon");

	Params::ACGHUD_C_ShowGasmaskFilterIcon_Params Parms{};

	Parms.Empty = Empty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGHUD.CGHUD_C.HealthChangedDelegateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            Phase                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UDamageType>     InDamageClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ACGHUD_C::HealthChangedDelegateEvent(float OldHealth, float NewHealth, enum class EHealthPhase Phase, TSubclassOf<class UDamageType> InDamageClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGHUD_C", "HealthChangedDelegateEvent");

	Params::ACGHUD_C_HealthChangedDelegateEvent_Params Parms{};

	Parms.OldHealth = OldHealth;
	Parms.NewHealth = NewHealth;
	Parms.Phase = Phase;
	Parms.InDamageClass = InDamageClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGHUD.CGHUD_C.RadiationPhaseChangedDelegateEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHealthPhase            OldPhase                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            NewPhase                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACGHUD_C::RadiationPhaseChangedDelegateEvent(enum class EHealthPhase OldPhase, enum class EHealthPhase NewPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGHUD_C", "RadiationPhaseChangedDelegateEvent");

	Params::ACGHUD_C_RadiationPhaseChangedDelegateEvent_Params Parms{};

	Parms.OldPhase = OldPhase;
	Parms.NewPhase = NewPhase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CGHUD.CGHUD_C.ExecuteUbergraph_CGHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_OnScreen_Inventory_HP_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_OnScreen_Inventory_HP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_WaterMark_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_HudFlashlightIndicator_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SizeX                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SizeY                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Empty                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_OldHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            K2Node_CustomEvent_Phase                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UDamageType>     K2Node_CustomEvent_InDamageClass                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHP_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHP_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            K2Node_CustomEvent_OldPhase                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            K2Node_CustomEvent_NewPhase                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_ByteByte_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_OnScreen_Inventory_HP_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_HudFlashlightIndicator_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_HudFlashlightIndicator_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACGHUD_C::ExecuteUbergraph_CGHUD(int32 EntryPoint, TArray<class UWid_OnScreen_Inventory_HP_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UWid_OnScreen_Inventory_HP_C* CallFunc_Array_Get_Item, class UWid_WaterMark_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_HudFlashlightIndicator_C* CallFunc_Create_ReturnValue_1, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_Empty, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_CustomEvent_OldHealth, float K2Node_CustomEvent_NewHealth, enum class EHealthPhase K2Node_CustomEvent_Phase, TSubclassOf<class UDamageType> K2Node_CustomEvent_InDamageClass, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, float CallFunc_GetMaxHP_ReturnValue, float CallFunc_GetCurrentHP_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, enum class EHealthPhase K2Node_CustomEvent_OldPhase, enum class EHealthPhase K2Node_CustomEvent_NewPhase, bool CallFunc_Less_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWid_OnScreen_Inventory_HP_C* CallFunc_Create_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class UWid_HudFlashlightIndicator_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWid_HudFlashlightIndicator_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CGHUD_C", "ExecuteUbergraph_CGHUD");

	Params::ACGHUD_C_ExecuteUbergraph_CGHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Event_SizeX = K2Node_Event_SizeX;
	Parms.K2Node_Event_SizeY = K2Node_Event_SizeY;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Empty = K2Node_CustomEvent_Empty;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_OldHealth = K2Node_CustomEvent_OldHealth;
	Parms.K2Node_CustomEvent_NewHealth = K2Node_CustomEvent_NewHealth;
	Parms.K2Node_CustomEvent_Phase = K2Node_CustomEvent_Phase;
	Parms.K2Node_CustomEvent_InDamageClass = K2Node_CustomEvent_InDamageClass;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_GetMaxHP_ReturnValue = CallFunc_GetMaxHP_ReturnValue;
	Parms.CallFunc_GetCurrentHP_ReturnValue = CallFunc_GetCurrentHP_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_CustomEvent_OldPhase = K2Node_CustomEvent_OldPhase;
	Parms.K2Node_CustomEvent_NewPhase = K2Node_CustomEvent_NewPhase;
	Parms.CallFunc_Less_ByteByte_ReturnValue = CallFunc_Less_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets_1 = CallFunc_GetAllWidgetsOfClass_FoundWidgets_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


