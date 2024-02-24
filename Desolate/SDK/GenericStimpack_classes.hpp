#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x420 - 0x420)
// BlueprintGeneratedClass GenericStimpack.GenericStimpack_C
class AGenericStimpack_C : public AGenericLootItem_C
{
public:

	static class UClass* StaticClass();
	static class AGenericStimpack_C* GetDefaultObj();

	bool ApplyUseEffects(class ASHPlayerCharacter* Character, class ASHEffect* TempEffect, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ASHEffect* CallFunc_CreateEffect_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


