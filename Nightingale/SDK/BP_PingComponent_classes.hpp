#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0xA2 - 0xA0)
// BlueprintGeneratedClass BP_PingComponent.BP_PingComponent_C
class UBP_PingComponent_C : public UActorComponent
{
public:
	enum class E_PingObjectType                  PingObjectType;                                    // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_ActionStationType            DefaultActionStationType;                          // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PingComponent_C* GetDefaultObj();

	void GetDefaultActionStationType(enum class Enum_ActionStationType* ActionStationType);
	void GetPingObjectType(enum class E_PingObjectType* PingObjectType, class FName* DataTableRowName, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
	void OnRep_PingObjectType();
};

}


