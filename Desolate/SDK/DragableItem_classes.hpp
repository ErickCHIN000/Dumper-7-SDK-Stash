#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass DragableItem.DragableItem_C
class IDragableItem_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IDragableItem_C* GetDefaultObj();

	void Drop();
	void Hold();
};

}


