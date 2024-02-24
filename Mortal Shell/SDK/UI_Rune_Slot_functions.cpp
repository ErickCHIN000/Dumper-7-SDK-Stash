#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Rune_Slot.UI_Rune_Slot_C
// (None)

class UClass* UUI_Rune_Slot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Rune_Slot_C");

	return Clss;
}


// UI_Rune_Slot_C UI_Rune_Slot.Default__UI_Rune_Slot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Rune_Slot_C* UUI_Rune_Slot_C::GetDefaultObj()
{
	static class UUI_Rune_Slot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Rune_Slot_C*>(UUI_Rune_Slot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleDarkFormSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasSpecialEffectRune__ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasImprovementRune__ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Slot_C::HandleDarkFormSlot(bool CallFunc_HasSpecialEffectRune__ReturnValue, bool CallFunc_HasImprovementRune__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleDarkFormSlot");

	Params::UUI_Rune_Slot_C_HandleDarkFormSlot_Params Parms{};

	Parms.CallFunc_HasSpecialEffectRune__ReturnValue = CallFunc_HasSpecialEffectRune__ReturnValue;
	Parms.CallFunc_HasImprovementRune__ReturnValue = CallFunc_HasImprovementRune__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleUnavailableSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::HandleUnavailableSlot(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleUnavailableSlot");

	Params::UUI_Rune_Slot_C_HandleUnavailableSlot_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleMiscRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Slot_C::HandleMiscRune(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleMiscRune");

	Params::UUI_Rune_Slot_C_HandleMiscRune_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Local_Texture                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Slot_C::HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleBackground");

	Params::UUI_Rune_Slot_C_HandleBackground_Params Parms{};

	Parms.Local_Texture = Local_Texture;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleTierColorAndVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetTierColors_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::HandleTierColorAndVisibility(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleTierColorAndVisibility");

	Params::UUI_Rune_Slot_C_HandleTierColorAndVisibility_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTierColors_ReturnValue = CallFunc_GetTierColors_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleFillBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::HandleFillBorder(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleFillBorder");

	Params::UUI_Rune_Slot_C_HandleFillBorder_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleBackgroundTile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::HandleBackgroundTile(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleBackgroundTile");

	Params::UUI_Rune_Slot_C_HandleBackgroundTile_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Slot_C::HandleTier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleTier");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.Rune_SetBallistazookaTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::Rune_SetBallistazookaTexture(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "Rune_SetBallistazookaTexture");

	Params::UUI_Rune_Slot_C_Rune_SetBallistazookaTexture_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.Rune_SetTextureIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::Rune_SetTextureIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "Rune_SetTextureIcon");

	Params::UUI_Rune_Slot_C_Rune_SetTextureIcon_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.Rune_SetWeaponTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::Rune_SetWeaponTexture(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EComboTypes Temp_byte_Variable_2, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UTexture* K2Node_Select_Default_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "Rune_SetWeaponTexture");

	Params::UUI_Rune_Slot_C_Rune_SetWeaponTexture_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.Rune_SetCharacterTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::Rune_SetCharacterTexture(class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class EArmorTypes Temp_byte_Variable, class UTexture* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "Rune_SetCharacterTexture");

	Params::UUI_Rune_Slot_C_Rune_SetCharacterTexture_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.Rune_SetDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMiscRune                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Slot_C::Rune_SetDetails(bool IsMiscRune, const struct FStruct_Rune& Rune, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_Rune& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "Rune_SetDetails");

	Params::UUI_Rune_Slot_C_Rune_SetDetails_Params Parms{};

	Parms.IsMiscRune = IsMiscRune;
	Parms.Rune = Rune;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.ToolTip_Rune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Rune_Skilltree_ToolTip_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::ToolTip_Rune(class UUI_Rune_Skilltree_ToolTip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "ToolTip_Rune");

	Params::UUI_Rune_Slot_C_ToolTip_Rune_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.ToolTip_Simple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Rune_Skilltree_ToolTip_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSimpleToolTipText_ReturnValue                        (None)

void UUI_Rune_Slot_C::ToolTip_Simple(class UUI_Rune_Skilltree_ToolTip_C* CallFunc_Create_ReturnValue, class FText CallFunc_GetSimpleToolTipText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "ToolTip_Simple");

	Params::UUI_Rune_Slot_C_ToolTip_Simple_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetSimpleToolTipText_ReturnValue = CallFunc_GetSimpleToolTipText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.ToolTip_SelectedShell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Rune_Skilltree_ToolTip_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::ToolTip_SelectedShell(class UUI_Rune_Skilltree_ToolTip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "ToolTip_SelectedShell");

	Params::UUI_Rune_Slot_C_ToolTip_SelectedShell_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.Rune_SetCategoryTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  CallFunc_GetCategoryRuneTexture_Texture                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::Rune_SetCategoryTexture(class UTexture2D* CallFunc_GetCategoryRuneTexture_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "Rune_SetCategoryTexture");

	Params::UUI_Rune_Slot_C_Rune_SetCategoryTexture_Params Parms{};

	Parms.CallFunc_GetCategoryRuneTexture_Texture = CallFunc_GetCategoryRuneTexture_Texture;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.GetSimpleToolTipText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// enum class Enum_Rune_Slot_Type     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        CallFunc_GetWeaponNames_ReturnValue                              (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

class FText UUI_Rune_Slot_C::GetSimpleToolTipText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class Enum_Rune_Slot_Type Temp_byte_Variable, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText CallFunc_GetWeaponNames_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "GetSimpleToolTipText");

	Params::UUI_Rune_Slot_C_GetSimpleToolTipText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.CallFunc_GetWeaponNames_ReturnValue = CallFunc_GetWeaponNames_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Slot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "PreConstruct");

	Params::UUI_Rune_Slot_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.UpdateRuneSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URuneInventoryComponent_C*   RuneInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::UpdateRuneSlot(class URuneInventoryComponent_C* RuneInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "UpdateRuneSlot");

	Params::UUI_Rune_Slot_C_UpdateRuneSlot_Params Parms{};

	Parms.RuneInventory = RuneInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Rune_Slot_C::BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Rune_Slot_C::BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.SetRuneSlot_InDesign
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Slot_C::SetRuneSlot_InDesign()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "SetRuneSlot_InDesign");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.UpdateMiscRune
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Rune_Slot_C::UpdateMiscRune(const struct FStruct_Rune& Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "UpdateMiscRune");

	Params::UUI_Rune_Slot_C_UpdateMiscRune_Params Parms{};

	Parms.Rune = Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.OnSlotSetUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Slot_C::OnSlotSetUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "OnSlotSetUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.HandleSlotForDarkForm
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Slot_C::HandleSlotForDarkForm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "HandleSlotForDarkForm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.UpdateRuneSlot_Manual
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, struct FStruct_Rune>SlotStatus                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_Rune_Slot_C::UpdateRuneSlot_Manual(TMap<class FName, struct FStruct_Rune> SlotStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "UpdateRuneSlot_Manual");

	Params::UUI_Rune_Slot_C_UpdateRuneSlot_Manual_Params Parms{};

	Parms.SlotStatus = SlotStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "Tick");

	Params::UUI_Rune_Slot_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Slot.UI_Rune_Slot_C.ExecuteUbergraph_UI_Rune_Slot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   K2Node_CustomEvent_RuneInventory                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_CustomEvent_Rune                                          (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FStruct_Rune>K2Node_CustomEvent_SlotStatus                                    (None)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)

void UUI_Rune_Slot_C::ExecuteUbergraph_UI_Rune_Slot(int32 EntryPoint, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class URuneInventoryComponent_C* K2Node_CustomEvent_RuneInventory, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon, const struct FStruct_Rune& K2Node_CustomEvent_Rune, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, TMap<class FName, struct FStruct_Rune> K2Node_CustomEvent_SlotStatus, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Slot_C", "ExecuteUbergraph_UI_Rune_Slot");

	Params::UUI_Rune_Slot_C_ExecuteUbergraph_UI_Rune_Slot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_CustomEvent_RuneInventory = K2Node_CustomEvent_RuneInventory;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;
	Parms.K2Node_CustomEvent_Rune = K2Node_CustomEvent_Rune;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_SlotStatus = K2Node_CustomEvent_SlotStatus;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetVisibility_ReturnValue_1 = CallFunc_GetVisibility_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


