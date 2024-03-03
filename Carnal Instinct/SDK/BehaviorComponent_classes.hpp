#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xC0 - 0xB0)
// BlueprintGeneratedClass BehaviorComponent.BehaviorComponent_C
class UBehaviorComponent_C : public UActorComponent
{
public:
	TArray<class UClass*>                        Enemies;                                           // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBehaviorComponent_C* GetDefaultObj();

	void CheckClass(class AActor* Actor, TArray<class UClass*>& Array, bool* Return, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IsEnemy(class AActor* Actor, bool* Return, bool CallFunc_CheckClass_Return);
};

}


