#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class PlayerPositionsRuntime.PlayerPositionsComponent
// (None)

class UClass* UPlayerPositionsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPositionsComponent");

	return Clss;
}


// PlayerPositionsComponent PlayerPositionsRuntime.Default__PlayerPositionsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerPositionsComponent* UPlayerPositionsComponent::GetDefaultObj()
{
	static class UPlayerPositionsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerPositionsComponent*>(UPlayerPositionsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerPositionsRuntime.PlayerPositionsConsumer
// (None)

class UClass* IPlayerPositionsConsumer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPositionsConsumer");

	return Clss;
}


// PlayerPositionsConsumer PlayerPositionsRuntime.Default__PlayerPositionsConsumer
// (Public, ClassDefaultObject, ArchetypeObject)

class IPlayerPositionsConsumer* IPlayerPositionsConsumer::GetDefaultObj()
{
	static class IPlayerPositionsConsumer* Default = nullptr;

	if (!Default)
		Default = static_cast<IPlayerPositionsConsumer*>(IPlayerPositionsConsumer::StaticClass()->DefaultObject);

	return Default;
}


// Class PlayerPositionsRuntime.PlayerPositionsSubsystem
// (None)

class UClass* UPlayerPositionsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerPositionsSubsystem");

	return Clss;
}


// PlayerPositionsSubsystem PlayerPositionsRuntime.Default__PlayerPositionsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayerPositionsSubsystem* UPlayerPositionsSubsystem::GetDefaultObj()
{
	static class UPlayerPositionsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerPositionsSubsystem*>(UPlayerPositionsSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


