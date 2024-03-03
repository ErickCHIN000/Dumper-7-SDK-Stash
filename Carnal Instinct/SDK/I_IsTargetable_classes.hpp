#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_IsTargetable.I_IsTargetable_C
class II_IsTargetable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_IsTargetable_C* GetDefaultObj();

	void IsTargetable(bool* Return_value);
	void OnDeselected(bool* DummyValue);
	void OnSelected(bool* DummyValue);
};

}


