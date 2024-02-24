#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// Class GbxAnimRuntime.AnimNotify_Delegate
class UAnimNotify_Delegate : public UAnimNotify
{
public:
	uint8                                        Pad_CF6[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_Delegate* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class GbxAnimRuntime.AnimNotify_GbxCustomEvent
class UAnimNotify_GbxCustomEvent : public UAnimNotify
{
public:
	class FName                                  EventName;                                         // 0x38(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxCustomEventContext            EventContext;                                      // 0x40(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRunOnServer : 1;                                  // Mask: 0x1, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRunOnClient : 1;                                  // Mask: 0x2, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRunIfLocalPlayer : 1;                             // Mask: 0x4, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTriggerOnFirstPersonMesh : 1;                     // Mask: 0x8, PropSize: 0x10x41(0x1)(Edit, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D14[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_GbxCustomEvent* GetDefaultObj();

};

// 0x18 (0x60 - 0x48)
// Class GbxAnimRuntime.AnimNotify_GbxClosedCaptionEvent
class UAnimNotify_GbxClosedCaptionEvent : public UAnimNotify_GbxCustomEvent
{
public:
	class FText                                  ClosedCaption;                                     // 0x48(0x18)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAnimNotify_GbxClosedCaptionEvent* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class GbxAnimRuntime.AnimNotify_ToggleClothEnvironmentCollision
class UAnimNotify_ToggleClothEnvironmentCollision : public UAnimNotify
{
public:
	bool                                         bEnable;                                           // 0x38(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D42[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimNotify_ToggleClothEnvironmentCollision* GetDefaultObj();

};

}


